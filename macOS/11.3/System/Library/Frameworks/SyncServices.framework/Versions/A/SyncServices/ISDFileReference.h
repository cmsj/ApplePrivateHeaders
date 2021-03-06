/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/ISDDataObject.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, NSData;

@interface ISDFileReference : ISDDataObject <NSCoding> {

	NSString* _persistentId;
	NSString* _path;
	NSDate* _timestamp;
	NSData* _aliasData;
	NSString* _bundleId;
	NSString* _bundleRelativePath;
	NSString* _windowsBinRelativePath;

}
+(void)initialize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(id)timestamp;
-(id)bundleId;
-(void)updateTimestamp;
-(id)persistentId;
-(id)initWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 windowsBinRelativePath:(id)arg4 ;
-(char)refersToFileAtPath:(id)arg1 ;
-(char)fileHasBeenModified;
-(char)validateFileReference;
-(id)initWithPath:(id)arg1 bundleId:(id)arg2 bundleRelativePath:(id)arg3 ;
-(id)aliasData;
-(id)bundleRelativePath;
-(id)windowsBinRelativePath;
@end

