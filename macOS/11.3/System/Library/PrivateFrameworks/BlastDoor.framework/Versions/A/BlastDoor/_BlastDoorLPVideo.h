/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, NSString, _BlastDoorLPVideoProperties;

@interface _BlastDoorLPVideo : NSObject <NSSecureCoding> {

	char _hasAudio;
	NSURL* _streamingURL;
	NSURL* _youTubeURL;
	NSData* _data;
	NSString* _MIMEType;
	NSURL* _fileURL;
	_BlastDoorLPVideoProperties* _properties;

}

@property (nonatomic,retain) NSURL * streamingURL;                                //@synthesize streamingURL=_streamingURL - In the implementation block
@property (nonatomic,retain) NSURL * youTubeURL;                                  //@synthesize youTubeURL=_youTubeURL - In the implementation block
@property (nonatomic,copy) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * MIMEType;                                   //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) char hasAudio;                                       //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) _BlastDoorLPVideoProperties * properties;              //@synthesize properties=_properties - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)MIMEType;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(_BlastDoorLPVideoProperties *)properties;
-(void)setProperties:(_BlastDoorLPVideoProperties *)arg1 ;
-(char)hasAudio;
-(void)setHasAudio:(char)arg1 ;
-(NSURL *)streamingURL;
-(char)_shouldEncodeData;
-(unsigned long long)_encodedSize;
-(NSURL *)youTubeURL;
-(id)_initWithVideo:(id)arg1 ;
-(void)setStreamingURL:(NSURL *)arg1 ;
-(void)setYouTubeURL:(NSURL *)arg1 ;
@end
