/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NSCFPrefManager : NSObject {

	NSMutableDictionary* _registeredDefaults;

}
+(id)standardPrefManager;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)stringForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(void)synchronizeDomain:(id)arg1 ;
-(void)setBoolean:(char)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(char)booleanForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(float)floatForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(double)doubleForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)deleteValueForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)setBoolean:(char)arg1 forKey:(id)arg2 ;
-(char)booleanForKey:(id)arg1 ;
-(void)deleteValueForKey:(id)arg1 ;
-(void)registerDefaults:(id)arg1 forDomain:(id)arg2 ;
-(void*)_copyValueForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)copyCurrentUserPrefsToMachinePrefsForDomain:(id)arg1 ;
@end

