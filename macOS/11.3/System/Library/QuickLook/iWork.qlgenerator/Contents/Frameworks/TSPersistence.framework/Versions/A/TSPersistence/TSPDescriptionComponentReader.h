/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPComponentReader.h>

@class TSPDescriptionGenerator;

@interface TSPDescriptionComponentReader : TSPComponentReader {

	TSPDescriptionGenerator* _descriptionGenerator;

}
-(void)read;
-(id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4 ;
-(char)shouldProceedParsingOnFailure;
-(char)shouldValidateComponentsOfInMemoryObjects;
-(id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const MessageInfo*)arg2 unarchiveClass:(Class)arg3 message:(unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message>>*)arg4 messageVersion:(unsigned long long)arg5 strongReferences:(unique_ptr<TSP::IdentifierMap<bool>, std::__1::default_delete<TSP::IdentifierMap<bool>>>*)arg6 unknownContent:(id)arg7 hasAlternateMessages:(char)arg8 ;
-(id)unknownObjectUnarchiverWithArchiveInfo:(const ArchiveInfo*)arg1 stream:(DispatchDataInputStream*)arg2 ignoreMessageData:(char)arg3 hasAlternateMessages:(char)arg4 ;
@end

