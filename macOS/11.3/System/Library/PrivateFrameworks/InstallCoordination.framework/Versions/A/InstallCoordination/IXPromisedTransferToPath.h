/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/Versions/A/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedTransferToPathSeed, NSURL;

@interface IXPromisedTransferToPath : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedTransferToPathSeed * seed; 
@property (assign,getter=isComplete,nonatomic) char complete; 
@property (assign,nonatomic) double percentComplete; 
@property (nonatomic,retain) NSURL * transferPath; 
@property (assign,nonatomic) char shouldCopy; 
@property (assign,nonatomic) char tryDeltaCopy; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setComplete:(char)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3 ;
-(void)setTransferPath:(NSURL *)arg1 ;
-(char)_doInit;
-(NSURL *)transferPath;
-(char)shouldCopy;
-(void)setShouldCopy:(char)arg1 ;
-(char)tryDeltaCopy;
-(void)setTryDeltaCopy:(char)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 transferPath:(id)arg3 diskSpaceNeeded:(unsigned long long)arg4 ;
-(Class)seedClass;
@end

