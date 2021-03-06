/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSRequest.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RBSServiceLocalProtocol;
@class RBSProcessPredicate, RBSTerminateContext, NSString;

@interface RBSTerminateRequest : RBSRequest <RBSXPCSecureCoding, NSCopying> {

	id<RBSServiceLocalProtocol> _service;
	char _targetsAllManagedProcesses;
	RBSProcessPredicate* _predicate;
	RBSTerminateContext* _context;

}

@property (nonatomic,readonly) char targetsAllManagedProcesses;              //@synthesize targetsAllManagedProcesses=_targetsAllManagedProcesses - In the implementation block
@property (nonatomic,retain) RBSProcessPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) RBSTerminateContext * context;                //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsRBSXPCSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(char)execute:(out id*)arg1 error:(out id*)arg2 ;
-(RBSProcessPredicate *)predicate;
-(void)setPredicate:(RBSProcessPredicate *)arg1 ;
-(RBSTerminateContext *)context;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 service:(id)arg3 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 ;
-(id)initWithProcessIdentity:(id)arg1 context:(id)arg2 ;
-(id)initWithProcessIdentifier:(id)arg1 context:(id)arg2 ;
-(id)initForAllManagedWithReason:(id)arg1 ;
-(char)execute:(out id*)arg1 ;
-(char)targetsAllManagedProcesses;
@end

