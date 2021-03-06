/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@class NSString, NSData, NSDate;

@interface CNContactImage : NSObject {

	NSString* _identifier;
	NSData* _imageData;
	NSDate* _lastUsedDate;
	long long _source;
	NSString* _sourceIdentifier;
	NSString* _variant;
	NSString* _displayString;
	CGRect _cropRect;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                     //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) NSDate * lastUsedDate;                  //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                        //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) long long source;                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * variant;                       //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) NSString * displayString;                 //@synthesize displayString=_displayString - In the implementation block
-(NSString *)identifier;
-(long long)source;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)variant;
-(void)setSource:(long long)arg1 ;
-(NSString *)displayString;
-(NSDate *)lastUsedDate;
-(NSString *)sourceIdentifier;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setVariant:(NSString *)arg1 ;
-(NSData *)imageData;
-(CGRect)cropRect;
-(id)initWithIdentifier:(id)arg1 imageData:(id)arg2 cropRect:(CGRect)arg3 lastUsedDate:(id)arg4 ;
-(id)initWithImageData:(id)arg1 cropRect:(CGRect)arg2 lastUsedDate:(id)arg3 ;
-(id)copyWithNewImageData:(id)arg1 ;
@end

