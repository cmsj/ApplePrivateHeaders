/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityKit.framework/Versions/A/AccessibilityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXKAction.h>

@protocol AXKActionDelegate;
@class NSString;

@interface AXKBaseAction : NSObject <AXKAction> {

	id<AXKActionDelegate> _actionDelegate;

}

@property (nonatomic,readonly) NSString * actionName; 
@property (nonatomic,readonly) NSString * actionDescription; 
@property (assign,nonatomic,__weak) id<AXKActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)actionName;
-(void)setActionDelegate:(id<AXKActionDelegate>)arg1 ;
-(id<AXKActionDelegate>)actionDelegate;
-(NSString *)actionDescription;
-(char)performActionWithElementController:(id)arg1 ;
-(char)mainWithElementController:(id)arg1 ;
@end
