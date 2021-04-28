/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol AMVariableControllerProtocol <NSObject>
@property (readonly) NSArray * variables; 
@property (nonatomic,readonly) NSArray * variableNames; 
@required
-(NSArray *)variables;
-(id)variableWithName:(id)arg1;
-(id)addVariable:(id)arg1;
-(id)variableWithUUID:(id)arg1;
-(NSArray *)variableNames;
-(id)variableNameForUUID:(id)arg1;
-(void)updateControl:(id)arg1 clickedPoint:(id)arg2 frame:(id)arg3 isTokenField:(id)arg4;
-(void)editVariable:(id)arg1 withControl:(id)arg2;
-(char)containsVariable:(id)arg1;
-(void)renameVariable:(id)arg1 name:(id)arg2;
-(void)updateValueOfVariable:(id)arg1 value:(id)arg2;

@end
