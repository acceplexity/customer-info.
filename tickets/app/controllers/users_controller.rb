class UsersController < ApplicationController
  def index
  end

def show
    @user = Hash.new
    if params[:username] == 'ryooopan'
        @user[:name] = 'Ryo Suzuki'
        @user[:username] = 'ryooopan'
        @user[:location] = 'Kanagawa, Japan'
        @user[:about] = 'Hello, I am Ryo.'
        elsif params[:username] == 'moyahima'
        @user[:name] = 'Shohei Aoki'
        @user[:username] = 'moyahima'
        @user[:location] = 'Tottori, Japan'
        @user[:about] = 'Nice to meet you.'
        end
    end
end
