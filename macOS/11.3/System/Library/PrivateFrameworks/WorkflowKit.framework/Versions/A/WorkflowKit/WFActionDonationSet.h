/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface WFActionDonationSet : NSObject {

	NSMutableArray* _predictedActions;
	NSMutableArray* _recentActions;
	NSMutableArray* _appSuggestedActions;

}

@property (nonatomic,readonly) NSMutableArray * predictedActions;                 //@synthesize predictedActions=_predictedActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentActions;                    //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * appSuggestedActions;              //@synthesize appSuggestedActions=_appSuggestedActions - In the implementation block
-(id)init;
-(NSMutableArray *)recentActions;
-(NSMutableArray *)appSuggestedActions;
-(NSMutableArray *)predictedActions;
@end
