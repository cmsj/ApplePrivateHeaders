/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CXHandle, NSDate, NSURL;

@interface CXVoicemail : NSObject <NSSecureCoding> {

	char _played;
	char _trashed;
	NSUUID* _UUID;
	CXHandle* _sender;
	NSDate* _dateReceived;
	NSURL* _audioFileURL;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) CXHandle * sender;                            //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSDate * dateReceived;                        //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSURL * audioFileURL;                         //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (assign,getter=isPlayed,nonatomic) char played;                //@synthesize played=_played - In the implementation block
@property (assign,getter=isTrashed,nonatomic) char trashed;              //@synthesize trashed=_trashed - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(CXHandle *)sender;
-(void)setSender:(CXHandle *)arg1 ;
-(char)isTrashed;
-(void)setTrashed:(char)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(NSURL *)audioFileURL;
-(char)isPlayed;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(NSDate *)dateReceived;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setPlayed:(char)arg1 ;
-(char)isEqualToVoicemail:(id)arg1 ;
@end

