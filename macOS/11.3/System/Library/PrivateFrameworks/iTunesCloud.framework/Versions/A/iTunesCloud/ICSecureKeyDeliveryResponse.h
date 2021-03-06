/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICStoreDialogResponse, NSError, NSDate, NSData;

@interface ICSecureKeyDeliveryResponse : NSObject {

	ICStoreDialogResponse* _dialog;
	NSError* _serverError;
	NSDate* _rentalExpirationDate;
	NSDate* _rentalPlaybackStartDate;
	NSDate* _renewalDate;
	NSData* _serverPlaybackContextData;
	NSData* _contentKeyContextData;

}

@property (nonatomic,copy) ICStoreDialogResponse * dialog;                  //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) NSError * serverError;                           //@synthesize serverError=_serverError - In the implementation block
@property (nonatomic,copy) NSDate * rentalExpirationDate;                   //@synthesize rentalExpirationDate=_rentalExpirationDate - In the implementation block
@property (nonatomic,copy) NSDate * rentalPlaybackStartDate;                //@synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate - In the implementation block
@property (nonatomic,copy) NSDate * renewalDate;                            //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,copy) NSData * serverPlaybackContextData;              //@synthesize serverPlaybackContextData=_serverPlaybackContextData - In the implementation block
@property (nonatomic,copy) NSData * contentKeyContextData;                  //@synthesize contentKeyContextData=_contentKeyContextData - In the implementation block
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(ICStoreDialogResponse *)dialog;
-(void)setDialog:(ICStoreDialogResponse *)arg1 ;
-(NSError *)serverError;
-(void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2 ;
-(void)setServerError:(NSError *)arg1 ;
-(NSDate *)rentalExpirationDate;
-(void)setRentalExpirationDate:(NSDate *)arg1 ;
-(NSDate *)rentalPlaybackStartDate;
-(void)setRentalPlaybackStartDate:(NSDate *)arg1 ;
-(NSData *)serverPlaybackContextData;
-(void)setServerPlaybackContextData:(NSData *)arg1 ;
-(NSData *)contentKeyContextData;
-(void)setContentKeyContextData:(NSData *)arg1 ;
@end

