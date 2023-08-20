#pragma once

class CPHScriptCondition;
class CPHScriptAction;
class CPHScriptObjectCondition;
class CPHScriptObjectAction;
class CPHScriptObjectConditionN;
class CPHScriptObjectActionN;
class CPHScriptGameObjectCondition;
class CPHScriptGameObjectAction;
class CPHConstForceAction;
class CPHLiquidParticlesPlayCall;
class CPHLiquidParticlesCondition;
class CPHFindLiquidParticlesComparer;
class CPHReqComparerV
{
public:
    virtual bool compare(const CPHScriptCondition*) const { return false; }
    virtual bool compare(const CPHScriptAction*) const { return false; }
    virtual bool compare(const CPHScriptObjectCondition*) const { return false; }
    virtual bool compare(const CPHScriptObjectAction*) const { return false; }
    virtual bool compare(const CPHScriptObjectConditionN*) const { return false; }
    virtual bool compare(const CPHScriptObjectActionN*) const { return false; }
    virtual bool compare(const CPHScriptGameObjectAction*) const { return false; }
    virtual bool compare(const CPHScriptGameObjectCondition*) const { return false; }
    virtual bool compare(const CPHConstForceAction*) const { return false; }
    virtual bool compare(const CPHLiquidParticlesPlayCall*) const { return false; }
    virtual bool compare(const CPHLiquidParticlesCondition*) const { return false; }
    virtual bool compare(const CPHFindLiquidParticlesComparer*) const { return false; }
};
