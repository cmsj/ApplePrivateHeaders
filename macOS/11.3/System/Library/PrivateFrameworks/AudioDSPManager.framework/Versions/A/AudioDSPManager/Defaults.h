/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSUserDefaults, NSMutableDictionary;

@interface Defaults : NSObject <NSCoding> {

	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _userDefaultsDictionary;

}
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)dataForKey:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
-(id)objectForKey:(id)arg1 withClass:(Class)arg2 ;
-(void)registerDefaultsObserver:(id)arg1 forKey:(id)arg2 ;
-(void)unregisterDefaultsObserver:(id)arg1 forKey:(id)arg2 ;
@end

