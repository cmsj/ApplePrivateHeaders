/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface GEOPOIEventPerformer : NSObject <NSSecureCoding> {

	NSString* _localizedName;
	NSString* _iTunesIdentifier;
	NSURL* _iTunesURL;

}

@property (nonatomic,retain) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * iTunesIdentifier;              //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * iTunesURL;                        //@synthesize iTunesURL=_iTunesURL - In the implementation block
+(char)supportsSecureCoding;
+(id)poiEventPerformersForPerformers:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithPerformer:(id)arg1 ;
-(NSString *)iTunesIdentifier;
-(void)setITunesIdentifier:(NSString *)arg1 ;
-(NSURL *)iTunesURL;
-(void)setITunesURL:(NSURL *)arg1 ;
@end

