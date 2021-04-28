/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _CNUILikenessFingerprintImpl;
@interface CNUILikenessFingerprint : NSObject <NSCopying> {

	id<_CNUILikenessFingerprintImpl> _impl;

}
+(id)publicFingerprintForContacts:(id)arg1 scope:(id)arg2 ;
+(id)fingerprintForContactIdentifier:(id)arg1 ;
+(id)fingerprintForData:(id)arg1 ;
+(id)fingerprintForContact:(id)arg1 ;
+(id)fingerprintForScope:(id)arg1 ;
+(id)publicFingerprintForContact:(id)arg1 ;
+(id)implForContact:(id)arg1 ;
+(id)fingerprintForContacts:(id)arg1 scope:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithImpl:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)hasContactIdentifier:(id)arg1 ;
-(id)initWithContacts:(id)arg1 scope:(id)arg2 ;
@end
