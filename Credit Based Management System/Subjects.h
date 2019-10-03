//
//  Subjects.h
//  Credit Based Management System
//
//  Created by Maheep on 04/10/19.
//  Copyright © 2019 splashTeam. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std ;

struct Credit{
    int lecture;
    int tutorial;
    int practical;
    int credits = lecture + tutorial + practical;
    
    Credit(int lecture, int tutorial, int practical){
        this->lecture = lecture;
        this->tutorial = tutorial;
        this->practical = practical;
    }
};

enum Subjects {
    EngineeringMechanics,
    EngineeringGraphicsDrafting,
    MathematicsI,
    MathematicsII,
    Physics,
    IntroToEngMaterials,
    EngineeringChemistry,
    BasicElectrical,
    FundamentalsITPython,
    CommunicativeEnglish,
    DataStructure,
    CPP,
    EnvironmentalStudies,
    DigitalCircuitAndLogicDesign,
    Communication,
    OperatingSystem,
    DataCommunication,
    SystemProgramming,
    DiscreteStructure,
    ComputerArchitecture,
    SystemAnalysisDesign,
    RelationalDBMS,
    DesignAnalysisAlgotithm,
    ComputerGraphics,
    ASPNET,
    ObjectOrientedAnalysisDesign,
    JAVA,
    SoftwareEngineeringTesting,
    FormalLanguageAutomata,
    ArtificialIntelligence,
    MachineLearning,
    CloudComputing,
    IndustrialTraining
};


