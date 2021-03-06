//
//  IMHFeed.h
//  imhere
//
//  Created by Aci Cartagena on 5/2/15.
//  Copyright (c) 2015 imhere. All rights reserved.
//

#import "JSONModel.h"

#import "IMHNote.h"
#import "IMHReply.h"

@interface IMHFeed : JSONModel

@property (strong, nonatomic) NSArray<IMHNote> *notes;
@property (strong, nonatomic) NSArray<IMHReply> *replies;

@end
