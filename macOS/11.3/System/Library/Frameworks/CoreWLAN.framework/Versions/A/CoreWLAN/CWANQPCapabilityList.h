/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/CWANQPElement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CWANQPCapabilityList : CWANQPElement <NSSecureCoding, NSCopying> {

	char _supportsVenueName;
	char _supportsNetworkAuthenticationType;
	char _supportsRoamingConsortium;
	char _supportsNAIRealm;
	char _supportsDomainName;

}

@property (assign,nonatomic) char supportsVenueName;                              //@synthesize supportsVenueName=_supportsVenueName - In the implementation block
@property (assign,nonatomic) char supportsNetworkAuthenticationType;              //@synthesize supportsNetworkAuthenticationType=_supportsNetworkAuthenticationType - In the implementation block
@property (assign,nonatomic) char supportsRoamingConsortium;                      //@synthesize supportsRoamingConsortium=_supportsRoamingConsortium - In the implementation block
@property (assign,nonatomic) char supportsNAIRealm;                               //@synthesize supportsNAIRealm=_supportsNAIRealm - In the implementation block
@property (assign,nonatomic) char supportsDomainName;                             //@synthesize supportsDomainName=_supportsDomainName - In the implementation block
+(char)supportsSecureCoding;
-(char)supportsVenueName;
-(void)setSupportsVenueName:(char)arg1 ;
-(char)supportsNetworkAuthenticationType;
-(void)setSupportsNetworkAuthenticationType:(char)arg1 ;
-(char)supportsRoamingConsortium;
-(void)setSupportsRoamingConsortium:(char)arg1 ;
-(char)supportsNAIRealm;
-(void)setSupportsNAIRealm:(char)arg1 ;
-(char)supportsDomainName;
-(void)setSupportsDomainName:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3 ;
@end

