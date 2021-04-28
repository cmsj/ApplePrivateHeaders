/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class NSCache, NSMutableDictionary, NSNotificationCenter, CNContactFormatter;

@interface MCDisplayNameManager : NSObject {

	NSCache* _parsedDisplayNameInfos;
	NSMutableDictionary* _queriedDisplayNameInfos;
	NSNotificationCenter* _displayNameNotificationCenter;
	CNContactFormatter* _fullNameFormatter;
	CNContactFormatter* _shortNameFormatter;

}

@property (nonatomic,readonly) NSNotificationCenter * displayNameNotificationCenter;              //@synthesize displayNameNotificationCenter=_displayNameNotificationCenter - In the implementation block
@property (nonatomic,readonly) CNContactFormatter * fullNameFormatter;                            //@synthesize fullNameFormatter=_fullNameFormatter - In the implementation block
@property (nonatomic,readonly) CNContactFormatter * shortNameFormatter;                           //@synthesize shortNameFormatter=_shortNameFormatter - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
+(id)formattedStringForDisplayNameInfoList:(id)arg1 ;
+(id)namesFromDisplayNameInfos:(id)arg1 ;
+(id)formattedStringForAddressList:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)displayNameForAddress:(id)arg1 ;
-(void)_nameContactsChanged:(id)arg1 ;
-(id)_cacheItemForFullAddress:(id)arg1 ;
-(id)_queriedDisplayNameInfoForAddress:(id)arg1 ;
-(id)_createDisplayNameInfoWithAddress:(id)arg1 ;
-(id)_createDisplayNameInfoWithContact:(id)arg1 ;
-(NSNotificationCenter *)displayNameNotificationCenter;
-(id)_createDisplayNameInfoWithContact:(id)arg1 fullName:(id)arg2 ;
-(CNContactFormatter *)fullNameFormatter;
-(CNContactFormatter *)shortNameFormatter;
-(void)resetCachedDisplayNamesFromContacts;
-(void)addDisplayNameObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeDisplayNameObserver:(id)arg1 ;
@end
