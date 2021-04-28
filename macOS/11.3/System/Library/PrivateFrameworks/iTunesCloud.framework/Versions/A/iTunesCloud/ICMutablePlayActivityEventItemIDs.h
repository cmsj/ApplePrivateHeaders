/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICPlayActivityEventItemIDs.h>

@class NSString;

@interface ICMutablePlayActivityEventItemIDs : ICPlayActivityEventItemIDs

@property (assign,nonatomic) unsigned long long cloudID; 
@property (nonatomic,copy) NSString * lyricsID; 
@property (assign,nonatomic) long long purchasedAdamID; 
@property (assign,nonatomic) long long radioAdamID; 
@property (assign,nonatomic) long long equivalencySourceAdamID; 
@property (assign,nonatomic) long long subscriptionAdamID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCloudID:(unsigned long long)arg1 ;
-(void)setLyricsID:(NSString *)arg1 ;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(void)setRadioAdamID:(long long)arg1 ;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
@end
