//
//  Reply.h
//  imhere
//
//  Created by Aci Cartagena on 5/2/15.
//  Copyright (c) 2015 imhere. All rights reserved.
//

#import "JSONModel.h"

@protocol IMHReply <NSObject>
@end

@interface IMHReply : JSONModel

@property (nonatomic, assign) NSInteger identification;
@property (strong, nonatomic) NSString *parent_id;
@property (strong, nonatomic) NSString *from;
@property (strong, nonatomic) NSString *message;
@property (strong, nonatomic) NSDate *send_timestamp;
@property (strong, nonatomic) NSDate *rcv_timestamp;

- (NSString *)timestampString;

@end
