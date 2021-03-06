/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_activity;
@class NSString, NSObject;

@interface GKActivity : NSObject {

	unsigned _mode;
	NSString* _name;
	NSObject*<OS_os_activity> _parent;
	NSObject*<OS_os_activity> _activity;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> parent;                //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> activity;              //@synthesize activity=_activity - In the implementation block
+(id)detached;
+(id)activity;
+(void)execute:(/*^block*/id)arg1 ;
+(id)named:(id)arg1 ;
+(id)currentOrNew;
+(void)named:(id)arg1 execute:(/*^block*/id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(NSObject*<OS_os_activity>)parent;
-(unsigned)mode;
-(NSObject*<OS_os_activity>)activity;
-(void)setActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(void)setParent:(NSObject*<OS_os_activity>)arg1 ;
-(id)child;
-(void)createActivity;
-(id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned)arg3 ;
-(id)named:(id)arg1 ;
-(void)named:(id)arg1 execute:(/*^block*/id)arg2 ;
@end

