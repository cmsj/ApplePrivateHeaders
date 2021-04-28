/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSSceneAgent.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSSceneHandle;
@class NSString;

@interface FBSBasicSceneAgent : NSObject <FBSSceneAgent, BSDescriptionProviding> {

	id<FBSSceneHandle> _scene;

}

@property (nonatomic,__weak,readonly) id<FBSSceneHandle> scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_configureWithScene:(id)arg1 ;
-(id<FBSSceneHandle>)scene;
-(void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(/*^block*/id)arg3 ;
@end
