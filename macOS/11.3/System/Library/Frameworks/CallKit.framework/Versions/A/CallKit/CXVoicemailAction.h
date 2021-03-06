/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXVoicemailAction : CXAction {

	NSUUID* _voicemailUUID;

}

@property (nonatomic,copy) NSUUID * voicemailUUID;              //@synthesize voicemailUUID=_voicemailUUID - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(id)initWithVoicemailUUID:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(NSUUID *)voicemailUUID;
-(void)setVoicemailUUID:(NSUUID *)arg1 ;
@end

