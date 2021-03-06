/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/Versions/A/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TimeSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSBonjourIPv6Address : NSObject <NSCopying> {

	unsigned char _ipv6Address[16];
	unsigned char _linkLayerAddress[6];
	char _hasLinkLayerAddress;

}

@property (assign,nonatomic) char hasLinkLayerAddress;                    //@synthesize hasLinkLayerAddress=_hasLinkLayerAddress - In the implementation block
@property (nonatomic,readonly) const char* ipv6Address; 
@property (nonatomic,readonly) const char* linkLayerAddress; 
+(char)getLinkLayerAddress:(char*)arg1 forIPv6Address:(const char*)arg2 error:(id*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(const char*)ipv6Address;
-(void)pokeDestinationAtPort:(unsigned short)arg1 onInterfaceIndex:(unsigned)arg2 ;
-(char)hasLinkLayerAddress;
-(void)setHasLinkLayerAddress:(char)arg1 ;
-(const char*)linkLayerAddress;
-(char)getLinkLayerAddressError:(id*)arg1 ;
-(id)initWithIPv6Address:(const char*)arg1 ;
@end

