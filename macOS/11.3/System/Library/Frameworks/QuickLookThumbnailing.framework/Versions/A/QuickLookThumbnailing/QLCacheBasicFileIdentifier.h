/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier <NSSecureCoding> {

	unsigned long long _fileId;
	fsid _fsid;

}

@property (readonly) unsigned long long fileId;              //@synthesize fileId=_fileId - In the implementation block
@property (readonly) fsid fsid;                              //@synthesize fsid=_fsid - In the implementation block
+(char)supportsSecureCoding;
+(Class)versionedFileIdentifierClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileId:(unsigned long long)arg1 fsid:(fsid)arg2 ;
-(unsigned long long)fileId;
-(fsid)fsid;
@end

