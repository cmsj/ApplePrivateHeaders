/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IMServicePlugIn.framework/Versions/A/IMServicePlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMServicePlugIn/IMServicePlugIn-Structs.h>
@class NSString, IMServicePlugInFileTransferSession;

@interface IMServicePlugInFileTransfer : NSObject {

	IMServicePlugInFileTransferInternal* _internal;

}

@property (readonly) NSString * guid; 
@property (readonly) NSString * path; 
@property (readonly) NSString * type; 
@property (readonly) unsigned long long transferredBytes; 
@property (readonly) unsigned long long totalBytes; 
@property (readonly) IMServicePlugInFileTransferSession * session; 
+(id)fileTransferWithPath:(id)arg1 type:(id)arg2 totalBytes:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSString *)path;
-(id)_url;
-(IMServicePlugInFileTransferSession *)session;
-(unsigned long long)totalBytes;
-(NSString *)guid;
-(id)initWithPath:(id)arg1 type:(id)arg2 totalBytes:(unsigned long long)arg3 ;
-(id)_initWithGUID:(id)arg1 path:(id)arg2 type:(id)arg3 totalBytes:(unsigned long long)arg4 ;
-(void)_stream:(id)arg1 didReadOrWriteBytes:(long long)arg2 ;
-(void)_setSession:(id)arg1 ;
-(void)_setActualLastPathComponent:(id)arg1 ;
-(unsigned long long)transferredBytes;
@end
