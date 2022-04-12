#pragma once
#include <iostream>

class SBomberImpl;
class Bomb;
class DynamicObject;
class GameObject;

class SBomber
{
public:
    SBomber();
    ~SBomber();
    bool GetExitFlag();

    void ProcessKBHit();
    void TimeStart();
    void TimeFinish();

    void DrawFrame();
    void MoveObjects();
    void CheckObjects();

    void CheckPlaneAndLevelGUI();
    void CheckBombsAndGround();
    void CheckDestoyableObjects(Bomb * pBomb);

    void DeleteDynamicObj(DynamicObject* pBomb);
    void DeleteStaticObj(GameObject* pObj);
    void FindGround();
    void FindPlane();
    void FindLevelGUI();
    void FindDestoyableGroundObjects();
    void FindAllBombs();
    void DropBomb();
private:
    std::unique_ptr<SBomberImpl> SbI;
};