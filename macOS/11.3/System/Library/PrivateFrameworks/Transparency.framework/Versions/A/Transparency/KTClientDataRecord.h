/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface KTClientDataRecord : NSObject <NSSecureCoding> {

	char _verified;
	NSData* _clientData;
	unsigned long long _applicationVersion;
	NSData* _clientDataVRFOutput;
	NSDate* _markedForDeletion;
	NSDate* _deletionEscrowExpiry;
	NSDate* _addedDate;

}

@property (retain) NSData * clientData;                                //@synthesize clientData=_clientData - In the implementation block
@property (assign) unsigned long long applicationVersion;              //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (retain) NSData * clientDataVRFOutput;                       //@synthesize clientDataVRFOutput=_clientDataVRFOutput - In the implementation block
@property (retain) NSDate * markedForDeletion;                         //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (retain) NSDate * deletionEscrowExpiry;                      //@synthesize deletionEscrowExpiry=_deletionEscrowExpiry - In the implementation block
@property (retain) NSDate * addedDate;                                 //@synthesize addedDate=_addedDate - In the implementation block
@property (assign) char verified;                                      //@synthesize verified=_verified - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAddedDate:(NSDate *)arg1 ;
-(NSDate *)addedDate;
-(unsigned long long)applicationVersion;
-(void)setApplicationVersion:(unsigned long long)arg1 ;
-(char)verified;
-(void)setVerified:(char)arg1 ;
-(NSDate *)markedForDeletion;
-(void)setMarkedForDeletion:(NSDate *)arg1 ;
-(NSData *)clientData;
-(void)setClientData:(NSData *)arg1 ;
-(NSData *)clientDataVRFOutput;
-(NSDate *)deletionEscrowExpiry;
-(id)initWithMutation:(id)arg1 ;
-(void)setClientDataVRFOutput:(NSData *)arg1 ;
-(void)setDeletionEscrowExpiry:(NSDate *)arg1 ;
-(id)initWithSingleDataRecord:(id)arg1 ;
@end

