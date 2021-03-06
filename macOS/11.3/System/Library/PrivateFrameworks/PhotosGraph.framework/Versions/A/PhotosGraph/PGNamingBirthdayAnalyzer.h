/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGNamingAnalyzer.h>

@class PGGraphNamingProcessor, NSString;

@interface PGNamingBirthdayAnalyzer : NSObject <PGNamingAnalyzer> {

	PGGraphNamingProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphNamingProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(id)initWithNamingProcessor:(id)arg1 ;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(PGGraphNamingProcessor *)processor;
-(void)findBirthdayMatchesFromBirthdayByContactIdentifier:(id)arg1 contactIdentifiersWithExplicitBirthday:(id)arg2 graph:(id)arg3 birthdaySceneNodes:(id)arg4 withProgressBlock:(/*^block*/id)arg5 ;
-(id)birthdaySceneNodesFromGraph:(id)arg1 ;
-(id)weakBirthdayMomentsFromMomentNodes:(id)arg1 usingSceneNodes:(id)arg2 ;
@end

