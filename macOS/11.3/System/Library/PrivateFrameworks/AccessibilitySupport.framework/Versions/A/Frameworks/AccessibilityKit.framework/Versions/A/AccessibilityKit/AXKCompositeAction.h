/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityKit.framework/Versions/A/AccessibilityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityKit/AXKBaseAction.h>

@class NSString, NSArray;

@interface AXKCompositeAction : AXKBaseAction {

	NSString* _actionName;
	NSString* _actionDescription;
	NSArray* _actions;

}

@property (nonatomic,copy) NSArray * actions;                         //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSString * actionName;                     //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy) NSString * actionDescription;              //@synthesize actionDescription=_actionDescription - In the implementation block
+(id)actionWithName:(id)arg1 description:(id)arg2 ;
+(id)actionWithActions:(id)arg1 name:(id)arg2 description:(id)arg3 ;
-(void)setActionName:(NSString *)arg1 ;
-(NSString *)actionName;
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(NSString *)actionDescription;
-(void)setActionDescription:(NSString *)arg1 ;
-(void)appendAction:(id)arg1 ;
-(void)appendActions:(id)arg1 ;
@end

