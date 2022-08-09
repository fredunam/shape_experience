#ifndef TRAJECTORY_LOOP_FUNCTIONS_H
#define TRAJECTORY_LOOP_FUNCTIONS_H

#include <argos3/core/simulator/loop_functions.h>
#include <argos3/plugins/robots/kilobot/simulator/kilobot_entity.h>

using namespace argos;

class CTrajectoryLoopFunctions : public CLoopFunctions {

public:

   typedef std::map<CKilobotEntity*, std::vector<CVector3> > TWaypointMap;
   TWaypointMap m_tWaypoints;

    typedef std::map<CKilobotEntity*, std::vector<CVector3> > TTargetMap;
    TTargetMap m_tTargets;

public:

   virtual ~CTrajectoryLoopFunctions() {}

   virtual void Init(TConfigurationNode& t_tree);

   virtual void Reset();

   virtual void PostStep();

   inline const TWaypointMap& GetWaypoints() const {
      return m_tWaypoints;
   }

private:

};

#endif
