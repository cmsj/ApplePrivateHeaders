/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CalendarPersistence/CalendarPersistence-Structs.h>
@interface CALKeychain : NSObject
+(id)sharedKeychain;
+(id)urlForKeychainWithScheme:(id)arg1 login:(id)arg2 host:(id)arg3 path:(id)arg4 port:(int)arg5 ;
+(id)oldURLForKeychainWithScheme:(id)arg1 login:(id)arg2 host:(id)arg3 principalPath:(id)arg4 port:(int)arg5 ;
-(void)modifyOrCreateKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2 ;
-(id)loadKeychainInformationsForURL:(id)arg1 ;
-(id)loadOldKeychainForURL:(id)arg1 ;
-(void)guessLoginPasswordForURL:(id)arg1 login:(id*)arg2 password:(id*)arg3 ;
-(id)loadKeychainInformationsForURL:(id)arg1 realm:(id)arg2 login:(id*)arg3 ;
-(CFDictionaryRef)newDictionaryForURL:(id)arg1 realm:(id)arg2 backupDictionaries:(id*)arg3 ;
-(void*)protocolForScheme:(id)arg1 ;
-(CFDictionaryRef)newDictionaryForGenericPasswordWithAccount:(id)arg1 service:(id)arg2 ;
-(CFDictionaryRef)newDictionaryForInternetPasswordWithAccount:(id)arg1 protocol:(void*)arg2 server:(id)arg3 port:(id)arg4 path:(id)arg5 ;
-(id)_computeOtherPossibleLookupPathsForPath:(id)arg1 ;
-(CFDictionaryRef)newDictionaryForURL:(id)arg1 realm:(id)arg2 ;
-(id)loadKeychainInformationsForURL:(id)arg1 realm:(id)arg2 login:(id*)arg3 shouldDeleteEntry:(char)arg4 ;
-(id)loadKeychainInformationsForURL:(id)arg1 realm:(id)arg2 ;
-(void)guessLoginPasswordForThisURL:(id)arg1 login:(id*)arg2 password:(id*)arg3 ;
-(void)modifyKeychainInformationsForQuery:(CFDictionaryRef)arg1 password:(id)arg2 ;
-(void)saveKeychainInformationsForURL:(id)arg1 realm:(id)arg2 andPassword:(id)arg3 ;
-(void)modifyOrCreateKeychainInformationsForURL:(id)arg1 realm:(id)arg2 andPassword:(id)arg3 ;
-(void)deleteKeychainInformationsForURL:(id)arg1 ;
-(id)guessPasswordForURL:(id)arg1 ;
-(void)deleteKeychainItemForNSURLCredential:(id)arg1 protectionSpace:(id)arg2 ;
@end

