/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _DSID;
	NSString* _deviceGUID;

}

@property (nonatomic,copy,readonly) NSNumber * DSID;                    //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceGUID;              //@synthesize deviceGUID=_deviceGUID - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)DSID;
-(NSString *)deviceGUID;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

