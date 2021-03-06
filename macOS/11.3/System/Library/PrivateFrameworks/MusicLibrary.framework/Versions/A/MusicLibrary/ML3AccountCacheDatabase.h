/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ML3MusicLibrary;

@interface ML3AccountCacheDatabase : NSObject {

	NSMutableDictionary* _propertiesCache;
	NSObject*<OS_dispatch_queue> accessQueue;
	ML3MusicLibrary* _library;

}
-(id)initWithLibrary:(id)arg1 ;
-(char)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(char)setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3 ;
-(id)_cacheEntryForDSID:(unsigned long long)arg1 ;
-(void)_setCacheEntry:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(char)getPropertiesForDSID:(unsigned long long)arg1 appleID:(id*)arg2 altDSID:(id*)arg3 ;
-(id)appleIDForDSID:(unsigned long long)arg1 ;
@end

