/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMUserDefaultsObserveToken.h>

@class REMUserDefaults, NSString;

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken> {

	char _removed;
	REMUserDefaults* _userDefaults;
	NSString* _userDefaultsKey;
	/*^block*/id _block;

}

@property (nonatomic,retain) REMUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy) NSString * userDefaultsKey;                    //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (nonatomic,copy) id block;                                      //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) char removed;                                //@synthesize removed=_removed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)block;
-(void)stopObserving;
-(REMUserDefaults *)userDefaults;
-(void)setBlock:(id)arg1 ;
-(void)setUserDefaults:(REMUserDefaults *)arg1 ;
-(char)removed;
-(id)initWithUserDefaults:(id)arg1 key:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)userDefaultsKey;
-(void)setRemoved:(char)arg1 ;
-(void)setUserDefaultsKey:(NSString *)arg1 ;
@end
