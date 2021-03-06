/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleLOM.framework/Versions/A/AppleLOM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LOMState : NSObject {

	NSString* _name;
	/*^block*/id _entryAction;
	/*^block*/id _exitAction;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (copy) id entryAction;                 //@synthesize entryAction=_entryAction - In the implementation block
@property (copy) id exitAction;                  //@synthesize exitAction=_exitAction - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)exitAction;
-(void)setExitAction:(id)arg1 ;
-(void)setEntryAction:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 entryAction:(/*^block*/id)arg2 exitAction:(/*^block*/id)arg3 ;
-(id)entryAction;
@end

