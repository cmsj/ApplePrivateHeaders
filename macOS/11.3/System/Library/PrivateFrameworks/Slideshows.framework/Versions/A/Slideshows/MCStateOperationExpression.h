/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCStateOperation.h>

@class NSString;

@interface MCStateOperationExpression : MCStateOperation {

	NSString* _expression;

}

@property (copy) NSString * expression;              //@synthesize expression=_expression - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andExpression:(id)arg3 ;
-(id)description;
-(void)setExpression:(NSString *)arg1 ;
-(id)xmlElement;
-(id)imprint;
-(NSString *)expression;
-(void)demolish;
-(id)initWithImprint:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end

