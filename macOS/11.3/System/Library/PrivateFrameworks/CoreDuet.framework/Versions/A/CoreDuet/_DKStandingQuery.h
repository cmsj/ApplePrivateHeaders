/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _DKStandingQuery
@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
@required
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(id)arg1;
-(void)setQueryIdentifier:(id)arg1;
-(NSString *)queryIdentifier;
-(id)fetchResult;
-(void)executeWithStorage:(id)arg1;

@end

