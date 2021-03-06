/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/Versions/A/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSISVariable, NSString;

@interface NSISPlaybackOperationVariableDelegate : NSObject {

	NSISVariable* _variable;
	NSString* _variableDescription;
	NSString* _markedConstraintDescription;
	char _variableIsUserObservable;
	int _orientationHint;

}

@property (retain) NSISVariable * variable;                           //@synthesize variable=_variable - In the implementation block
@property (copy) NSString * variableDescription;                      //@synthesize variableDescription=_variableDescription - In the implementation block
@property (copy) NSString * markedConstraintDescription;              //@synthesize markedConstraintDescription=_markedConstraintDescription - In the implementation block
@property (assign) char variableIsUserObservable;                     //@synthesize variableIsUserObservable=_variableIsUserObservable - In the implementation block
@property (assign) int orientationHint;                               //@synthesize orientationHint=_orientationHint - In the implementation block
-(int)orientationHint;
-(NSString *)variableDescription;
-(char)variableIsUserObservable;
-(NSString *)markedConstraintDescription;
-(void)setVariableDescription:(NSString *)arg1 ;
-(void)setMarkedConstraintDescription:(NSString *)arg1 ;
-(void)setVariableIsUserObservable:(char)arg1 ;
-(void)setOrientationHint:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(NSISVariable *)variable;
-(id)firstItem;
-(id)secondItem;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_addToEngine:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(void)setVariable:(NSISVariable *)arg1 ;
@end

