/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/Versions/A/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class USOSerializedGraph;

@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct> {

	USOSerializedGraph* _task;
	USOSerializedGraph* _goal;

}

@property (nonatomic,retain) USOSerializedGraph * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * goal;              //@synthesize goal=_goal - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(USOSerializedGraph *)task;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(id)initWithGoal:(id)arg1 ;
-(USOSerializedGraph *)goal;
-(void)setGoal:(USOSerializedGraph *)arg1 ;
@end
