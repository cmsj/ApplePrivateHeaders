/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMKDoubleSpaceEventHandler : NSObject {

	NSMutableArray* _eventArray;

}

@property (nonatomic,retain) NSMutableArray * eventArray;              //@synthesize eventArray=_eventArray - In the implementation block
+(id)sharedHandler;
-(char)shouldDoSpecialHandling;
-(void)dealloc;
-(id)init;
-(char)handleEvent:(id)arg1 ;
-(void)resetState;
-(NSMutableArray *)eventArray;
-(void)setEventArray:(NSMutableArray *)arg1 ;
@end

