/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SVXServiceCommandHandling <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@optional
-(char)shouldDependOnCommand:(id)arg1;
-(void)prepareToHandleCommand:(id)arg1 completion:(/*^block*/id)arg2;

@required
+(Class)supportedCommandClass;
-(NSString *)identifier;
-(char)isCommandUUFR:(id)arg1;
-(void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(/*^block*/id)arg4;

@end
