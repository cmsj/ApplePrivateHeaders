/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/AssistiveControlSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ACSHStack : NSObject <NSCopying> {

	char _pushMovesDuplicatesToTop;
	NSMutableArray* __queue;

}

@property (retain) NSMutableArray * _queue;                              //@synthesize _queue=__queue - In the implementation block
@property (assign,nonatomic) char pushMovesDuplicatesToTop;              //@synthesize pushMovesDuplicatesToTop=_pushMovesDuplicatesToTop - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(NSMutableArray *)_queue;
-(void)clear;
-(id)peek;
-(void)push:(id)arg1 ;
-(id)pop;
-(void)set_queue:(NSMutableArray *)arg1 ;
-(char)pushMovesDuplicatesToTop;
-(void)setPushMovesDuplicatesToTop:(char)arg1 ;
@end
