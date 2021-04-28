/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBWatchListItem.h>
@class NSString, NSData;


@protocol _SFPBWatchListItem <NSObject>
@property (nonatomic,copy) NSString * watchListIdentifier; 
@property (nonatomic,copy) NSString * seasonEpisodeTextFormat; 
@property (nonatomic,copy) NSString * continueInTextFormat; 
@property (nonatomic,copy) NSString * openButtonTitle; 
@property (nonatomic,copy) NSString * installButtonTitle; 
@property (nonatomic,copy) NSString * purchaseOfferTextFormat; 
@property (nonatomic,copy) NSString * inUpNextText; 
@property (nonatomic,copy) NSString * addToUpNextText; 
@property (nonatomic,copy) NSString * addedToUpNextText; 
@property (nonatomic,copy) NSString * watchLiveTextFormat; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setWatchListIdentifier:(id)arg1;
-(void)setAddedToUpNextText:(id)arg1;
-(void)setAddToUpNextText:(id)arg1;
-(void)setInUpNextText:(id)arg1;
-(void)setSeasonEpisodeTextFormat:(id)arg1;
-(void)setContinueInTextFormat:(id)arg1;
-(void)setOpenButtonTitle:(id)arg1;
-(void)setInstallButtonTitle:(id)arg1;
-(void)setPurchaseOfferTextFormat:(id)arg1;
-(void)setWatchLiveTextFormat:(id)arg1;
-(NSString *)watchListIdentifier;
-(NSString *)seasonEpisodeTextFormat;
-(NSString *)continueInTextFormat;
-(NSString *)openButtonTitle;
-(NSString *)installButtonTitle;
-(NSString *)purchaseOfferTextFormat;
-(NSString *)inUpNextText;
-(NSString *)addToUpNextText;
-(NSString *)addedToUpNextText;
-(NSString *)watchLiveTextFormat;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBWatchListItem : PBCodable <_SFPBWatchListItem, NSSecureCoding> {

	NSString* _watchListIdentifier;
	NSString* _seasonEpisodeTextFormat;
	NSString* _continueInTextFormat;
	NSString* _openButtonTitle;
	NSString* _installButtonTitle;
	NSString* _purchaseOfferTextFormat;
	NSString* _inUpNextText;
	NSString* _addToUpNextText;
	NSString* _addedToUpNextText;
	NSString* _watchLiveTextFormat;

}

@property (nonatomic,copy) NSString * watchListIdentifier;                  //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,copy) NSString * seasonEpisodeTextFormat;              //@synthesize seasonEpisodeTextFormat=_seasonEpisodeTextFormat - In the implementation block
@property (nonatomic,copy) NSString * continueInTextFormat;                 //@synthesize continueInTextFormat=_continueInTextFormat - In the implementation block
@property (nonatomic,copy) NSString * openButtonTitle;                      //@synthesize openButtonTitle=_openButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * installButtonTitle;                   //@synthesize installButtonTitle=_installButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * purchaseOfferTextFormat;              //@synthesize purchaseOfferTextFormat=_purchaseOfferTextFormat - In the implementation block
@property (nonatomic,copy) NSString * inUpNextText;                         //@synthesize inUpNextText=_inUpNextText - In the implementation block
@property (nonatomic,copy) NSString * addToUpNextText;                      //@synthesize addToUpNextText=_addToUpNextText - In the implementation block
@property (nonatomic,copy) NSString * addedToUpNextText;                    //@synthesize addedToUpNextText=_addedToUpNextText - In the implementation block
@property (nonatomic,copy) NSString * watchLiveTextFormat;                  //@synthesize watchLiveTextFormat=_watchLiveTextFormat - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(void)setAddedToUpNextText:(NSString *)arg1 ;
-(void)setAddToUpNextText:(NSString *)arg1 ;
-(void)setInUpNextText:(NSString *)arg1 ;
-(void)setSeasonEpisodeTextFormat:(NSString *)arg1 ;
-(void)setContinueInTextFormat:(NSString *)arg1 ;
-(void)setOpenButtonTitle:(NSString *)arg1 ;
-(void)setInstallButtonTitle:(NSString *)arg1 ;
-(void)setPurchaseOfferTextFormat:(NSString *)arg1 ;
-(void)setWatchLiveTextFormat:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)watchListIdentifier;
-(NSString *)seasonEpisodeTextFormat;
-(NSString *)continueInTextFormat;
-(NSString *)openButtonTitle;
-(NSString *)installButtonTitle;
-(NSString *)purchaseOfferTextFormat;
-(NSString *)inUpNextText;
-(NSString *)addToUpNextText;
-(NSString *)addedToUpNextText;
-(NSString *)watchLiveTextFormat;
@end
