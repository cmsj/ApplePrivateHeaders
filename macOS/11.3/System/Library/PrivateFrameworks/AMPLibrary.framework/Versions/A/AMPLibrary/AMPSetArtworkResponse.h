/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPLibrary.framework/Versions/A/AMPLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AMPArtworkSourceInfo, NSError, NSString;

@interface AMPSetArtworkResponse : NSObject <NSSecureCoding> {

	unsigned _status;
	AMPArtworkSourceInfo* _info;
	NSError* _error;
	NSString* _uuid;
	unsigned long long _imageDataHash;

}

@property (nonatomic,retain) AMPArtworkSourceInfo * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned status;                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long imageDataHash;              //@synthesize imageDataHash=_imageDataHash - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(NSError *)error;
-(void)setUuid:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(AMPArtworkSourceInfo *)info;
-(void)setInfo:(AMPArtworkSourceInfo *)arg1 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(unsigned long long)imageDataHash;
-(void)setImageDataHash:(unsigned long long)arg1 ;
@end
