/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/Versions/A/SoftwareUpdateCoreSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SUCoreRestoreVersion : NSObject <NSSecureCoding> {

	NSString* _restoreVersionString;
	NSArray* _parsedVersion;
	long long _buildGroup;
	long long _majorVersion;
	long long _minorVersion;
	long long _buildVersion;
	long long _syncedVersion;
	long long _suffixVersion;

}

@property (nonatomic,retain) NSString * restoreVersionString;              //@synthesize restoreVersionString=_restoreVersionString - In the implementation block
@property (nonatomic,retain) NSArray * parsedVersion;                      //@synthesize parsedVersion=_parsedVersion - In the implementation block
@property (assign,nonatomic) long long buildGroup;                         //@synthesize buildGroup=_buildGroup - In the implementation block
@property (nonatomic,readonly) long long majorVersion;                     //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) long long minorVersion;                     //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) long long buildVersion;                     //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) long long syncedVersion;                    //@synthesize syncedVersion=_syncedVersion - In the implementation block
@property (nonatomic,readonly) long long suffixVersion;                    //@synthesize suffixVersion=_suffixVersion - In the implementation block
+(id)_stringForNSComparisonResult:(long long)arg1 ;
+(char)supportsSecureCoding;
-(void)_parseRestoreVersionString;
-(NSString *)restoreVersionString;
-(char)_isStringOnlyNumbers:(id)arg1 ;
-(void)setBuildGroup:(long long)arg1 ;
-(void)setParsedVersion:(NSArray *)arg1 ;
-(long long)buildGroup;
-(NSArray *)parsedVersion;
-(void)setRestoreVersionString:(NSString *)arg1 ;
-(long long)suffixVersion;
-(id)initWithRestoreVersion:(id)arg1 ;
-(char)isComparable:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)buildVersion;
-(long long)majorVersion;
-(long long)minorVersion;
-(id)summary;
-(long long)syncedVersion;
@end

